// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXNAMEDREPLAYABLEGESTURE_H
#define AXNAMEDREPLAYABLEGESTURE_H

@class NSString;


#import "AXMutableReplayableGesture.h"

@interface AXNamedReplayableGesture : AXMutableReplayableGesture

@property (nonatomic) BOOL hasLocalizableName; // ivar: _hasLocalizableName
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) BOOL shouldPerformAtOriginalLocation; // ivar: _shouldPerformAtOriginalLocation


+(BOOL)supportsSecureCoding;
+(id)_fingerIdentifierForFingerAtIndex:(NSUInteger)arg0 ;
+(id)gestureWithLegacyFormatDictionary:(id)arg0 ;
+(id)gestureWithPoints:(id)arg0 times:(id)arg1 forces:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)gestureShiftedByOffset:(struct CGPoint )arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif