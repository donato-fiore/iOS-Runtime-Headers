// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSSWATCHFACE_H
#define NSSWATCHFACE_H

@class NSString, NSUUID, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NSSWatchFace : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *faceDisplayName; // ivar: _faceDisplayName
@property (retain, nonatomic) NSUUID *faceIdentifier; // ivar: _faceIdentifier
@property (nonatomic) BOOL isActive; // ivar: _isActive
@property (retain, nonatomic) NSArray *selectedFocusModeIdentifiers; // ivar: _selectedFocusModeIdentifiers


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif