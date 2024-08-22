// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CRSSERVICEBUNDLE_H
#define _CRSSERVICEBUNDLE_H

@class NSBundle, NSString;
@protocol CRSIdentifiedServing, CRSServing;



@interface _CRSServiceBundle : NSBundle <CRSIdentifiedServing>

 {
    id<CRSServing> *_service;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *serviceIdentifier;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)underlyingService;
-(void)_initializeServiceWithClass:(Class)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif