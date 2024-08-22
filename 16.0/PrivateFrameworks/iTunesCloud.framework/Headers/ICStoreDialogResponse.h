// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSTOREDIALOGRESPONSE_H
#define ICSTOREDIALOGRESPONSE_H

@class NSArray, NSString, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ICStoreDialogResponse : NSObject <NSCopying>



@property (readonly, nonatomic, getter=isBiometricAuthenticationAllowed) BOOL biometricAuthenticationAllowed;
@property (readonly, copy, nonatomic) NSArray *buttons;
@property (readonly, nonatomic) NSInteger defaultButtonType;
@property (readonly, copy, nonatomic) NSString *explanation;
@property (readonly, nonatomic, getter=isInitialCheckboxValue) BOOL initialCheckboxValue;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, copy, nonatomic) NSDictionary *responseDictionary; // ivar: _responseDictionary
@property (readonly, nonatomic) NSInteger type;


-(id)_buttonActionKeyForType:(NSInteger)arg0 ;
-(id)_buttonTitleKeyForType:(NSInteger)arg0 ;
-(id)_buttonWithType:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithResponseDictionary:(id)arg0 ;


@end


#endif