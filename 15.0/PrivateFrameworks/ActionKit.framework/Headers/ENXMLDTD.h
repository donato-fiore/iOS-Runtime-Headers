// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ENXMLDTD_H
#define ENXMLDTD_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ENXMLDTD : NSObject {
    *_xmlDtd _dtd;
}


@property (retain, nonatomic) NSString *docTypeDeclaration; // ivar: _docTypeDeclaration


+(id)dtdWithBundleResource:(id)arg0 ofType:(id)arg1 ;
+(id)enexDTD;
+(id)enml2dtd;
+(id)lat1DTD;
+(id)specialDTD;
+(id)symbolDTD;
+(void)initialize;
-(BOOL)isAttributeLegal:(id)arg0 inElement:(id)arg1 ;
-(BOOL)isElementLegal:(id)arg0 ;
-(id)initWithContentsOfFile:(id)arg0 ;
-(id)sanitizedAttributes:(id)arg0 forElement:(id)arg1 ;
-(struct _xmlElement *)xmlElementNamed:(id)arg0 ;
-(struct _xmlEntity *)xmlEntityNamed:(id)arg0 ;
-(void)dealloc;


@end


#endif