// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSDATAASSET_H
#define NSDATAASSET_H

@class CUINamedData, NSData, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NSDataAsset : NSObject <NSCopying>

 {
    CUINamedData *_namedData;
}


@property (readonly, copy) NSData *data;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *typeIdentifier;


+(id)_namedDataPrivateAccessorWithName:(id)arg0 bundle:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 bundle:(id)arg1 ;
-(void)dealloc;


@end


#endif