// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFFILELOCATION_H
#define WFFILELOCATION_H

@class NSString;
@protocol WFFileLocationRepresenting, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFFileLocation : NSObject <WFFileLocationRepresenting, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *relativeSubpath; // ivar: _relativeSubpath
@property (readonly) Class superclass;


+(BOOL)canRepresentURL:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(Class)supportedClassForURL:(id)arg0 ;
+(id)locationWithSerializedRepresentation:(id)arg0 ;
+(id)locationWithURL:(id)arg0 ;
+(id)subpathFromURL:(id)arg0 ;
-(BOOL)isSupportedOnCurrentPlatform;
-(BOOL)shouldShowUsersDuringDisplay:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRelativeSubpath:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)resolveLocationWithError:(*id)arg0 ;
-(id)serializedRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif