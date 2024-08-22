// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHSHEETVIEWMODEL_H
#define SHSHEETVIEWMODEL_H

@class NSArray, NSString;
@protocol SHSheetViewModelInterface;

#import <Foundation/Foundation.h>


@interface SHSheetViewModel : NSObject <SHSheetViewModelInterface>



@property (readonly, copy, nonatomic) NSArray *activities; // ivar: _activities
@property (retain, nonatomic) NSString *customOptionsTitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *metadataValues; // ivar: _metadataValues
@property (readonly, copy, nonatomic) NSArray *peopleSuggestions; // ivar: _peopleSuggestions
@property (copy, nonatomic) NSArray *restrictedActivityTypes; // ivar: _restrictedActivityTypes
@property (nonatomic) BOOL showOptions; // ivar: _showOptions
@property (readonly) Class superclass;


-(id)initWithPeopleSuggestions:(id)arg0 activities:(id)arg1 metadataValues:(id)arg2 ;


@end


#endif