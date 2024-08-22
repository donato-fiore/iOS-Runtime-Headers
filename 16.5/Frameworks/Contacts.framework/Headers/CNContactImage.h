// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTIMAGE_H
#define CNCONTACTIMAGE_H

@class NSString, NSData, NSDate;

#import <Foundation/Foundation.h>


@interface CNContactImage : NSObject

@property (readonly, nonatomic) CGRect cropRect; // ivar: _cropRect
@property (retain, nonatomic) NSString *displayString; // ivar: _displayString
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSData *imageData; // ivar: _imageData
@property (readonly, nonatomic) NSDate *lastUsedDate; // ivar: _lastUsedDate
@property (retain, nonatomic) NSData *poseConfigurationData; // ivar: _poseConfigurationData
@property (nonatomic) NSInteger source; // ivar: _source
@property (retain, nonatomic) NSString *sourceIdentifier; // ivar: _sourceIdentifier
@property (retain, nonatomic) NSString *variant; // ivar: _variant


-(id)copyWithNewImageData:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 imageData:(id)arg1 cropRect:(struct CGRect )arg2 lastUsedDate:(id)arg3 ;
-(id)initWithImageData:(id)arg0 cropRect:(struct CGRect )arg1 lastUsedDate:(id)arg2 ;


@end


#endif