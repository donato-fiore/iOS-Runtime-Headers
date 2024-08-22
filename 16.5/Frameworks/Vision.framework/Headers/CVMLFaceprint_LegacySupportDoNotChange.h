// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CVMLFACEPRINT_LEGACYSUPPORTDONOTCHANGE_H
#define CVMLFACEPRINT_LEGACYSUPPORTDONOTCHANGE_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CVMLFaceprint_LegacySupportDoNotChange : NSObject <NSSecureCoding>



@property (retain) NSData *faceprint; // ivar: _faceprint
@property (copy) NSString *faceprintInputPath; // ivar: _faceprintInputPath
@property (copy) NSString *key; // ivar: _key
@property unsigned int platform; // ivar: _platform
@property unsigned int profile; // ivar: _profile


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif