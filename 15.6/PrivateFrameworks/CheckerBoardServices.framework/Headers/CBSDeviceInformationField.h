// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CBSDEVICEINFORMATIONFIELD_H
#define CBSDEVICEINFORMATIONFIELD_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface CBSDeviceInformationField : NSObject

@property (nonatomic) NSUInteger format; // ivar: _format
@property (readonly, nonatomic) NSString *formattedTitle;
@property (readonly, nonatomic) NSString *formattedValue;
@property (readonly, nonatomic) NSArray *formattedValuesArray;
@property (readonly, nonatomic) BOOL multiLineFormatted;
@property (retain, nonatomic) NSString *value; // ivar: _value


+(id)fieldWithFormat:(NSUInteger)arg0 value:(id)arg1 ;
-(id)_formattedIMEI:(id)arg0 ;
-(id)initWithFormat:(NSUInteger)arg0 value:(id)arg1 ;
-(id)title;


@end


#endif