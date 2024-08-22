// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCPAYLOADSECTION_H
#define MCPAYLOADSECTION_H

@class NSMutableArray, NSString;

#import <Foundation/Foundation.h>


@interface MCPayloadSection : NSObject

@property (retain, nonatomic) NSMutableArray *payloadInfos; // ivar: _payloadInfos
@property (retain, nonatomic) NSString *sectionFooter; // ivar: _sectionFooter
@property (retain, nonatomic) NSString *sectionTitle; // ivar: _sectionTitle


-(id)init;
-(id)initWithSectionTitle:(id)arg0 footer:(id)arg1 payloadInfos:(id)arg2 ;


@end


#endif