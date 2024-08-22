// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCCERTIFICATEPROPERTIESINFO_H
#define MCCERTIFICATEPROPERTIESINFO_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MCCertificatePropertiesInfo : NSObject

@property (retain, nonatomic) NSArray *keyValueSections; // ivar: _keyValueSections
@property (retain, nonatomic) NSArray *sectionTitles; // ivar: _sectionTitles
@property (retain, nonatomic) NSArray *sections; // ivar: _sections


-(id)_cellInfosForSection:(id)arg0 ;
-(id)_copyPropertiesFromTrust:(struct __SecTrust *)arg0 ;
-(id)_sectionInfoForCertSection:(id)arg0 title:(id)arg1 ;
-(id)_sectionsFromProperties:(id)arg0 ;
-(id)_sendablePropertiesFromProperties:(id)arg0 ;
-(id)_sendablePropertiesFromTrust:(struct __SecTrust *)arg0 ;
-(id)_sendablePropertyFromProperty:(id)arg0 ;
-(id)initWithCertificate:(struct __SecCertificate *)arg0 ;
-(id)initWithCertificateProperties:(id)arg0 ;
-(id)initWithTrust:(struct __SecTrust *)arg0 ;
-(void)_setup:(id)arg0 ;


@end


#endif