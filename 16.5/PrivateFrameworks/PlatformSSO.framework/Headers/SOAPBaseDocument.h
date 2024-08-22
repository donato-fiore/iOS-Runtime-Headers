// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SOAPBASEDOCUMENT_H
#define SOAPBASEDOCUMENT_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface SOAPBaseDocument : NSObject

@property (readonly, copy, nonatomic) NSData *XMLData;
@property (readonly, copy, nonatomic) NSString *XMLString;


-(id)XMLDataWithOptions:(NSUInteger)arg0 ;
-(id)XMLStringWithOptions:(NSUInteger)arg0 ;


@end


#endif