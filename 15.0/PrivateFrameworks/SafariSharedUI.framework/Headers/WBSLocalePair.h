// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSLOCALEPAIR_H
#define WBSLOCALEPAIR_H

@class NSString, _LTLocalePair, NSLocale;

#import <Foundation/Foundation.h>


@interface WBSLocalePair : NSObject

@property (readonly, copy, nonatomic) NSString *compactDescriptionForLogging;
@property (readonly, nonatomic) _LTLocalePair *lt_localePair;
@property (readonly, nonatomic) NSLocale *sourceLocale; // ivar: _sourceLocale
@property (readonly, copy, nonatomic) NSString *sourceLocaleIdentifier;
@property (readonly, nonatomic) NSLocale *targetLocale; // ivar: _targetLocale
@property (readonly, copy, nonatomic) NSString *targetLocaleIdentifier;


-(id)description;
-(id)initWithLTLocalePair:(id)arg0 ;
-(id)initWithSourceLocale:(id)arg0 targetLocale:(id)arg1 ;
-(id)initWithSourceLocaleIdentifier:(id)arg0 targetLocaleIdentifier:(id)arg1 ;


@end


#endif