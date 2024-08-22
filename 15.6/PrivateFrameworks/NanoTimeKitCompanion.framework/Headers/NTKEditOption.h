// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKEDITOPTION_H
#define NTKEDITOPTION_H

@class NSString, CLKDevice;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NTKEditOption : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *dailySnapshotKey;
@property (readonly, nonatomic) CLKDevice *device; // ivar: _device
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *localizedNameForAction;
@property (readonly, nonatomic) NSInteger swatchStyle;


+(BOOL)supportsSecureCoding;
+(id)optionsDescription;
+(struct CGSize )sizeForSwatchStyle:(NSInteger)arg0 ;
-(BOOL)isPrideOption;
-(BOOL)isValidOption;
-(BOOL)optionExistsInDevice:(id)arg0 ;
-(id)JSONObjectRepresentation;
-(id)JSONObjectRepresentationForFace:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithJSONObjectRepresentation:(id)arg0 forDevice:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif