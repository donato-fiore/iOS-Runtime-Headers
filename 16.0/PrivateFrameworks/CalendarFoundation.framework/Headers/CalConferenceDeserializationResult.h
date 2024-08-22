// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALCONFERENCEDESERIALIZATIONRESULT_H
#define CALCONFERENCEDESERIALIZATIONRESULT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CalVirtualConference.h"

@interface CalConferenceDeserializationResult : NSObject

@property (readonly, nonatomic) NSString *blockTitle; // ivar: _blockTitle
@property (readonly, nonatomic) CalVirtualConference *conference; // ivar: _conference
@property (readonly, nonatomic) _NSRange range; // ivar: _range


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithConference:(id)arg0 range:(struct _NSRange )arg1 blockTitle:(id)arg2 ;


@end


#endif