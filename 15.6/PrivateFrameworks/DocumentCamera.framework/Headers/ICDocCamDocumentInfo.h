// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICDOCCAMDOCUMENTINFO_H
#define ICDOCCAMDOCUMENTINFO_H

@class NSString, NSData, NSDictionary;
@protocol NSSecureCoding, ICDocCamViewControllerDelegate, DCScanDataDelegate;

#import <Foundation/Foundation.h>

#import "ICDocCamImageQuad.h"

@interface ICDocCamDocumentInfo : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *croppedAndFilteredImageUUID; // ivar: _croppedAndFilteredImageUUID
@property (retain, nonatomic) NSString *croppedButNotFilteredImageUUID; // ivar: _croppedButNotFilteredImageUUID
@property (nonatomic) short currentFilter; // ivar: _currentFilter
@property (nonatomic) NSInteger currentOrientation; // ivar: _currentOrientation
@property (weak) NSObject<ICDocCamViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSString *fullImageUUID; // ivar: _fullImageUUID
@property (readonly, nonatomic) BOOL hasFilter;
@property (retain, nonatomic) ICDocCamImageQuad *imageQuad; // ivar: _imageQuad
@property (retain, nonatomic) NSData *markupModelData; // ivar: _markupModelData
@property (retain, nonatomic) NSString *meshAnimImageUUID; // ivar: _meshAnimImageUUID
@property (retain, nonatomic) NSDictionary *metaData; // ivar: _metaData
@property (readonly, nonatomic) NSObject<DCScanDataDelegate> *scanDataDelegate;
@property (retain, nonatomic) NSString *scanDataDelegateIdentifier; // ivar: _scanDataDelegateIdentifier


+(BOOL)supportsSecureCoding;
-(id)allUUIDs;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif