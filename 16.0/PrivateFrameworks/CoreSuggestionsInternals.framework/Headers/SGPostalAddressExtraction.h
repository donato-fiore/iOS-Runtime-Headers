// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGPOSTALADDRESSEXTRACTION_H
#define SGPOSTALADDRESSEXTRACTION_H

@class SGPostalAddressComponents, NSString;

#import <Foundation/Foundation.h>


@interface SGPostalAddressExtraction : NSObject

@property (readonly, nonatomic) SGPostalAddressComponents *components; // ivar: _components
@property (readonly, nonatomic) NSString *plainText; // ivar: _plainText


-(BOOL)hasExtraction;
-(id)initWithPlainText:(id)arg0 components:(id)arg1 ;


@end


#endif