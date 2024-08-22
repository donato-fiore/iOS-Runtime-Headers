// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHSTROKEGROUPQUERYITEM_H
#define CHSTROKEGROUPQUERYITEM_H

@class NSDictionary, NSLocale, NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface CHStrokeGroupQueryItem : NSObject

@property (readonly, copy, nonatomic) NSDictionary *_errorsByLocale; // ivar: __errorsByLocale
@property (readonly, copy, nonatomic) NSDictionary *_tokenizedTextResultsByLocale; // ivar: __tokenizedTextResultsByLocale
@property (readonly, copy, nonatomic) NSLocale *preferredLocale; // ivar: _preferredLocale
@property (readonly, nonatomic) NSNumber *strokeGroupIdentifier; // ivar: _strokeGroupIdentifier
@property (readonly, nonatomic) NSNumber *strokeGroupStableIdentifier; // ivar: _strokeGroupStableIdentifier
@property (readonly, nonatomic) NSInteger strokeGroupType; // ivar: _strokeGroupType
@property (readonly, copy, nonatomic) NSArray *strokeIdentifiers; // ivar: _strokeIdentifiers


+(id)descriptionForStrokeGroupQueryItemType:(NSInteger)arg0 ;
-(id)description;
-(id)initWithStrokeGroupIdentifier:(id)arg0 stableIdentifier:(id)arg1 strokeIdentifiers:(id)arg2 type:(NSInteger)arg3 preferredLocale:(id)arg4 tokenizedTextResultsByLocale:(id)arg5 errorsByLocale:(id)arg6 ;
-(id)textRecognitionResultForLocale:(id)arg0 error:(*id)arg1 ;


@end


#endif