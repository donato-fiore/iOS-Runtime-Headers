// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMCPROFILEPAYLOADSECTION_H
#define DMCPROFILEPAYLOADSECTION_H

@class NSMutableArray, NSString;

#import <Foundation/Foundation.h>


@interface DMCProfilePayloadSection : NSObject

@property (retain, nonatomic) NSMutableArray *payloadViewModels; // ivar: _payloadViewModels
@property (retain, nonatomic) NSString *sectionFooter; // ivar: _sectionFooter
@property (retain, nonatomic) NSString *sectionTitle; // ivar: _sectionTitle


-(id)init;
-(id)initWithSectionTitle:(id)arg0 footer:(id)arg1 payloadViewModels:(id)arg2 ;


@end


#endif