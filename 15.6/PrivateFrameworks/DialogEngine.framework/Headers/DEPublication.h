// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DEPUBLICATION_H
#define DEPUBLICATION_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface DEPublication : NSObject

@property (nonatomic) BOOL disabled; // ivar: _disabled
@property (retain, nonatomic) NSDictionary *distributions; // ivar: _distributions
@property (retain, nonatomic) NSString *lastModified; // ivar: _lastModified
@property (retain, nonatomic) NSString *tag; // ivar: _tag


+(BOOL)write:(id)arg0 tag:(id)arg1 date:(id)arg2 disabled:(BOOL)arg3 toURL:(id)arg4 keyId:(NSUInteger)arg5 privateKey:(id)arg6 ;
+(id)dateToLastModified:(id)arg0 ;
-(id)getPublicationId;
-(id)init;
-(id)initWithDistributions:(id)arg0 tag:(id)arg1 lastModified:(id)arg2 disabled:(BOOL)arg3 ;


@end


#endif