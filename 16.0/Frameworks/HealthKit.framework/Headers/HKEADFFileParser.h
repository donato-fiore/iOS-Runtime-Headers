// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKEADFFILEPARSER_H
#define HKEADFFILEPARSER_H

@class NSData;

#import <Foundation/Foundation.h>


@interface HKEADFFileParser : NSObject

@property (retain, nonatomic) NSData *data; // ivar: _data


-(id)initWithData:(id)arg0 ;
-(id)newBuilderWithStartDate:(id)arg0 ;
-(id)payloadInRange:(struct _NSRange )arg0 ;
-(void)_enumerateHeadersWithHandler:(id)arg0 ;
-(void)enumerateChannelsWithHandler:(id)arg0 ;


@end


#endif