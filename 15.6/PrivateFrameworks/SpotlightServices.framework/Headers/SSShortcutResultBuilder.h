// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSSHORTCUTRESULTBUILDER_H
#define SSSHORTCUTRESULTBUILDER_H

@class NSArray, NSString;


#import "SSResultBuilder.h"

@interface SSShortcutResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSArray *alternateNames; // ivar: _alternateNames
@property (nonatomic) BOOL isBackgroundRunnable; // ivar: _isBackgroundRunnable
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *numberOfActionsString; // ivar: _numberOfActionsString
@property (retain, nonatomic) NSString *punchoutLabel; // ivar: _punchoutLabel
@property (retain, nonatomic) NSString *thumbnailURL; // ivar: _thumbnailURL
@property (retain, nonatomic) NSString *userActivityRequiredString; // ivar: _userActivityRequiredString


+(BOOL)supportsResult:(id)arg0 ;
+(id)bundleId;
-(id)buildDescriptions;
-(id)buildFootnote;
-(id)buildResult;
-(id)initWithResult:(id)arg0 ;


@end


#endif