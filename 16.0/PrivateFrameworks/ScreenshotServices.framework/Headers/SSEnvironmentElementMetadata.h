// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSENVIRONMENTELEMENTMETADATA_H
#define SSENVIRONMENTELEMENTMETADATA_H

@class NSString, NSArray;
@protocol BSXPCSecureCoding, SSLoggable;

#import <Foundation/Foundation.h>


@interface SSEnvironmentElementMetadata : NSObject <BSXPCSecureCoding, SSLoggable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *loggableDescription;
@property (copy, nonatomic) NSArray *rectsInElement; // ivar: _rectsInElement
@property (readonly) Class superclass;
@property (copy, nonatomic, setter=setUserActivityTitle:) NSString *userActivityTitle; // ivar: _userActivityTitle


+(BOOL)supportsBSXPCSecureCoding;
-(id)_decodedRectsForEncodedRects:(id)arg0 ;
-(id)_encodableRects;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif