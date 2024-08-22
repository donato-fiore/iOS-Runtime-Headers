// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VGFRAMESELECTIONDUMPOUTPUT_H
#define VGFRAMESELECTIONDUMPOUTPUT_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VGFrameSelectionDumpOutput : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *selectedPoses; // ivar: _selectedPoses


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif