// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMPREVIEWFILTERSCOMMAND_H
#define CAMPREVIEWFILTERSCOMMAND_H

@class NSArray;


#import "CAMCaptureCommand.h"

@interface CAMPreviewFiltersCommand : CAMCaptureCommand

@property (readonly, nonatomic) NSArray *filters; // ivar: _filters


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFilters:(id)arg0 ;
-(id)initWithSubcommands:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif