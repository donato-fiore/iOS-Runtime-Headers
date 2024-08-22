// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHTAPTORADARDESCRIPTOR_H
#define BLSHTAPTORADARDESCRIPTOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BLSHTapToRadarDescriptor : NSObject

@property (copy, nonatomic) NSString *attachments; // ivar: _attachments
@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (copy, nonatomic) NSString *classification; // ivar: _classification
@property (copy, nonatomic) NSString *componentID; // ivar: _componentID
@property (copy, nonatomic) NSString *componentName; // ivar: _componentName
@property (copy, nonatomic) NSString *componentVersion; // ivar: _componentVersion
@property (readonly, nonatomic) NSUInteger designation; // ivar: _designation
@property (copy, nonatomic) NSString *keywordIDs; // ivar: _keywordIDs
@property (readonly, nonatomic) NSString *radarDescription; // ivar: _radarDescription
@property (readonly, nonatomic) NSString *radarTitle; // ivar: _radarTitle
@property (copy, nonatomic) NSString *reproducibility; // ivar: _reproducibility


-(id)initWithDesignation:(NSUInteger)arg0 radarTitle:(id)arg1 radarDescription:(id)arg2 ;
-(id)toURL;


@end


#endif