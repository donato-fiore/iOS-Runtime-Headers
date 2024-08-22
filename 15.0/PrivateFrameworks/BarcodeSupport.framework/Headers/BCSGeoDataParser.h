// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCSGEODATAPARSER_H
#define BCSGEODATAPARSER_H

@class NSString;
@protocol BCSDataParser;

#import <Foundation/Foundation.h>


@interface BCSGeoDataParser : NSObject <BCSDataParser>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_validateLatitudeAndLongitudeInString:(id)arg0 range:(struct _NSRange )arg1 ;
+(id)parseString:(id)arg0 ;


@end


#endif