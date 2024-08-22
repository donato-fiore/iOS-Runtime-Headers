// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSCONFLICTSTRATEGY_H
#define DSCONFLICTSTRATEGY_H

@class NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface DSConflictStrategy : NSObject

@property (copy, nonatomic) id *conflictHandler; // ivar: _conflictHandler
@property (copy, nonatomic) NSString *localizedAlertMessageFormat; // ivar: _localizedAlertMessageFormat
@property (copy, nonatomic) NSString *localizedAlertTitle; // ivar: _localizedAlertTitle
@property (retain, nonatomic) NSMutableDictionary *localizedTitlesByResolution; // ivar: _localizedTitlesByResolution
@property (nonatomic) NSUInteger type; // ivar: _type


-(id)init;
-(id)localizedAlertMessageForSourceFileURL:(id)arg0 ;
-(id)localizedTitleForResolution:(NSUInteger)arg0 ;
-(void)setLocalizedTitle:(id)arg0 forResolution:(NSUInteger)arg1 ;
-(void)validate;


@end


#endif