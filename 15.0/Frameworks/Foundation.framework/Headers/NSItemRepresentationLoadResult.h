// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSITEMREPRESENTATIONLOADRESULT_H
#define NSITEMREPRESENTATIONLOADRESULT_H

@class NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "NSString.h"
#import "NSError.h"
#import "NSSecurityScopedURLWrapper.h"

@interface NSItemRepresentationLoadResult : NSObject <NSCopying>



@property (copy, nonatomic) NSString *archivedObjectClassName; // ivar: _archivedObjectClassName
@property (copy, nonatomic) id *cleanupHandler; // ivar: _cleanupHandler
@property (copy, nonatomic) NSData *data; // ivar: _data
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSSecurityScopedURLWrapper *urlWrapper; // ivar: _urlWrapper
@property (nonatomic) BOOL wasOpenedInPlace; // ivar: _wasOpenedInPlace


// +(id)resultWithData:(id)arg0 urlWrapper:(id)arg1 cleanupHandler:(id)arg2 error:(unk)arg3  ;
+(id)resultWithError:(id)arg0 ;
// -(id)copyWithData:(id)arg0 urlWrapper:(id)arg1 cleanupHandler:(id)arg2 error:(unk)arg3  ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)dealloc;


@end


#endif