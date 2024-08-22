// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKUSERPHOTOCONTENTEDITOPTION_H
#define NTKUSERPHOTOCONTENTEDITOPTION_H

@class NSString;


#import "NTKEditOption.h"

@interface NTKUserPhotoContentEditOption : NTKEditOption

@property (readonly, nonatomic) BOOL isDefaultPhoto; // ivar: _isDefaultPhoto
@property (readonly, nonatomic) NSString *path; // ivar: _path


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif