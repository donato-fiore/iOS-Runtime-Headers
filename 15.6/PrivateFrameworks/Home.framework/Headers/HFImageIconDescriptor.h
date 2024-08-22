// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFIMAGEICONDESCRIPTOR_H
#define HFIMAGEICONDESCRIPTOR_H

@class NSString, UIImageSymbolConfiguration;
@protocol HFIconDescriptor;

#import <Foundation/Foundation.h>


@interface HFImageIconDescriptor : NSObject <HFIconDescriptor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *imageIdentifier; // ivar: _imageIdentifier
@property (readonly, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration; // ivar: _imageSymbolConfiguration
@property (nonatomic) BOOL isDemoModeDescriptor; // ivar: _isDemoModeDescriptor
@property (readonly, nonatomic) BOOL isSystemImage; // ivar: _isSystemImage
@property (readonly, nonatomic) BOOL shouldForceLTR; // ivar: _shouldForceLTR
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)iconDescriptorByMergingWithIconDescriptor:(id)arg0 ;
-(id)imageIconDescriptorWithUpdatedImageSymbolConfiguration:(id)arg0 ;
-(id)initWithDemoModeImageIdentifier:(id)arg0 ;
-(id)initWithImageIdentifier:(id)arg0 ;
-(id)initWithSymbolIconConfiguration:(id)arg0 ;
-(id)initWithSystemImageNamed:(id)arg0 ;
-(id)initWithSystemImageNamed:(id)arg0 configuration:(id)arg1 ;


@end


#endif