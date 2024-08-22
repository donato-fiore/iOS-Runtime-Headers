// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPUIIMAGEROWCELLCONFIGURATION_H
#define CPUIIMAGEROWCELLCONFIGURATION_H

@class NSArray, NSString;
@protocol CPUIImageRowCellConfigurationProtocol;

#import <Foundation/Foundation.h>


@interface CPUIImageRowCellConfiguration : NSObject <CPUIImageRowCellConfigurationProtocol>



@property (retain, nonatomic) NSArray *artworkCatalogs; // ivar: _artworkCatalogs
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *images; // ivar: _images
@property (copy, nonatomic) id *selectGridItemBlock; // ivar: _selectGridItemBlock
@property (copy, nonatomic) id *selectTitleBlock; // ivar: _selectTitleBlock
@property (nonatomic) BOOL showActivityIndicator; // ivar: _showActivityIndicator
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


// +(id)configurationWithText:(id)arg0 artworkCatalogs:(id)arg1 selectGridItemBlock:(id)arg2 selectTitleBlock:(unk)arg3  ;
// +(id)configurationWithText:(id)arg0 artworkCatalogs:(id)arg1 selectGridItemBlock:(id)arg2 selectTitleBlock:(unk)arg3 showActivityIndicator:(id)arg4  ;
// +(id)configurationWithText:(id)arg0 artworkCatalogs:(id)arg1 selectGridItemBlock:(id)arg2 selectTitleBlock:(unk)arg3 showActivityIndicator:(id)arg4 enabled:(unk)arg5  ;
// +(id)configurationWithText:(id)arg0 images:(id)arg1 selectGridItemBlock:(id)arg2 selectTitleBlock:(unk)arg3 showActivityIndicator:(id)arg4  ;
// +(id)configurationWithText:(id)arg0 images:(id)arg1 selectGridItemBlock:(id)arg2 selectTitleBlock:(unk)arg3 showActivityIndicator:(id)arg4 enabled:(unk)arg5  ;


@end


#endif