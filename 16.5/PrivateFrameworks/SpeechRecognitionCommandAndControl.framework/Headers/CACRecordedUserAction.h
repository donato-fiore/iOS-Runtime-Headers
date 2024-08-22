// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CACRECORDEDUSERACTION_H
#define CACRECORDEDUSERACTION_H

@class NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CACRecordedUserActionFlow.h"

@interface CACRecordedUserAction : NSObject <NSSecureCoding>

 {
    NSInteger _type;
    NSString *_identifier;
    NSDictionary *_targetAttributes;
    BOOL _canIgnoreFailure;
    id *_object;
}


@property (readonly) BOOL canIgnoreFailure;
@property (readonly) BOOL isReplayableGesture;
@property (readonly) BOOL isSpokenCommand;
@property (weak) CACRecordedUserActionFlow *ownerFlow; // ivar: _ownerFlow


+(BOOL)supportsSecureCoding;
-(id)_derivedTargetAttributesFromSpokenCommand:(id)arg0 ;
-(id)_dictionaryFromRect:(struct CGRect )arg0 ;
-(id)_labeledElementsFromMatchingCriteria:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSpokenCommand:(id)arg0 ;
-(id)plistDescription;
-(id)spokenCommand;
-(struct CGRect )_rectFromDictionary:(id)arg0 ;
-(void)beginExecutingWithCompletionBlock:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif