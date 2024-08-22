// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCCERTIFICATEDETAILSCONTROLLER_H
#define MCCERTIFICATEDETAILSCONTROLLER_H

@class PSListController, NSArray;



@interface MCCertificateDetailsController : PSListController {
    NSArray *_properties;
}




+(id)_dateFormatter;
-(id)_propertiesFromTrust:(struct __SecTrust *)arg0 ;
-(id)specifiers;
-(id)specifiersFromCertificateProperties:(id)arg0 ;
-(id)specifiersFromTrust:(struct __SecTrust *)arg0 ;
-(id)valueForSpecifier:(id)arg0 ;


@end


#endif