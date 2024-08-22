// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGCONTACTDETAILKEY_H
#define SGCONTACTDETAILKEY_H

@class NSString;
@protocol SGEntityKey;

#import <Foundation/Foundation.h>

#import "SGIdentityKey.h"

@interface SGContactDetailKey : NSObject <SGEntityKey>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SGIdentityKey *identityKey; // ivar: _identityKey
@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *value; // ivar: _value


+(BOOL)isSupportedEntityType:(NSInteger)arg0 ;
+(id)prefixForForIdentityKey:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToContactDetailKey:(id)arg0 ;
-(id)initWithIdentityKey:(id)arg0 label:(id)arg1 normalizedValue:(id)arg2 ;
-(id)initWithSerialized:(id)arg0 ;
-(id)serialize;


@end


#endif