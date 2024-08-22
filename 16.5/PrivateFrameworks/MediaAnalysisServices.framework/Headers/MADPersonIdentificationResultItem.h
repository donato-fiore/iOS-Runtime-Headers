// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MADPERSONIDENTIFICATIONRESULTITEM_H
#define MADPERSONIDENTIFICATIONRESULTITEM_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MADPersonIdentificationResultItem : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGRect boundingBox; // ivar: _boundingBox
@property (readonly, nonatomic) float confidence; // ivar: _confidence
@property (readonly, nonatomic) NSString *personIdentifier; // ivar: _personIdentifier
@property (readonly, nonatomic) NSString *personName; // ivar: _personName


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPersonIdentifier:(id)arg0 personName:(id)arg1 boundingBox:(struct CGRect )arg2 andConfidence:(float)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif