// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPERSISTENTSTOREREQUEST_H
#define NSPERSISTENTSTOREREQUEST_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NSPersistentStoreRequest : NSObject <NSCopying>

 {
    NSArray *_affectedStores;
}


@property (retain, nonatomic) NSArray *affectedStores;
@property (readonly) NSUInteger requestType;


+(void)initialize;
-(BOOL)_secureOperation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)_setSecureOperation:(BOOL)arg0 ;
-(void)dealloc;


@end


#endif