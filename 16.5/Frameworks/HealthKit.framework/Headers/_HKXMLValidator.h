// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKXMLVALIDATOR_H
#define _HKXMLVALIDATOR_H


#import <Foundation/Foundation.h>


@interface _HKXMLValidator : NSObject {
    *_xmlSchema _xsdSchema;
}




+(id)validatorWithPathToXSD:(id)arg0 ;
+(id)validatorWithXSD:(id)arg0 ;
-(BOOL)validateXML:(id)arg0 simpleError:(*id)arg1 detailedErrors:(*id)arg2 ;
-(id)_initWithSchema:(struct _xmlSchema *)arg0 ;
-(void)dealloc;


@end


#endif