// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKCUSTOMBEHAVIOR_H
#define FBKCUSTOMBEHAVIOR_H

@class NSDictionary, NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface FBKCustomBehavior : NSObject

@property (readonly, nonatomic) NSDictionary *answers; // ivar: _answers
@property (readonly, copy, nonatomic) NSString *description;
@property (readonly, nonatomic) NSNumber *formId; // ivar: _formId
@property (readonly, nonatomic) BOOL isCaptive; // ivar: _isCaptive
@property (readonly, nonatomic) BOOL launchNewDraft; // ivar: _launchNewDraft
@property (readonly, nonatomic) BOOL makeVisible; // ivar: _makeVisible
@property (readonly, nonatomic) BOOL notifyOnUpload; // ivar: _notifyOnUpload


-(id)initWithDictionary:(id)arg0 ;


@end


#endif