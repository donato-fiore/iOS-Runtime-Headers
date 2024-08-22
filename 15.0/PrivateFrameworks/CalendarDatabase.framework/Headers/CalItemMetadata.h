// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALITEMMETADATA_H
#define CALITEMMETADATA_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CalItemMetadata : NSObject <NSSecureCoding>



@property int classification; // ivar: _classification
@property (retain) NSDictionary *x_props; // ivar: _x_props


+(BOOL)supportsSecureCoding;
+(id)_whitelistedClassesForSecureCoding;
+(id)metadataWithData:(id)arg0 ;
+(id)metadataWithICSComponent:(id)arg0 ;
-(id)dataRepresentationWithExistingMetaData:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithICSComponent:(id)arg0 ;
-(void)applyToComponent:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif