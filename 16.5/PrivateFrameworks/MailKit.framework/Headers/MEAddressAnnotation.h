// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MEADDRESSANNOTATION_H
#define MEADDRESSANNOTATION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MEAddressAnnotation : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger iconType; // ivar: _iconType
@property (readonly, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription
@property (copy, nonatomic) NSString *originatorExtensionDisplayName; // ivar: _originatorExtensionDisplayName


+(BOOL)supportsSecureCoding;
+(id)errorWithLocalizedDescription:(id)arg0 ;
+(id)successWithLocalizedDescription:(id)arg0 ;
+(id)warningWithLocalizedDescription:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEmailAddressTokenIconType:(NSInteger)arg0 localizedDescription:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif