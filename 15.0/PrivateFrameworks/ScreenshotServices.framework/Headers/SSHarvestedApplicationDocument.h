// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSHARVESTEDAPPLICATIONDOCUMENT_H
#define SSHARVESTEDAPPLICATIONDOCUMENT_H

@class NSData, NSString;
@protocol BSXPCCoding, SSLoggable;

#import <Foundation/Foundation.h>


@interface SSHarvestedApplicationDocument : NSObject <BSXPCCoding, SSLoggable>



@property (copy, nonatomic) NSData *PDFData; // ivar: _PDFData
@property (nonatomic) NSInteger PDFPage; // ivar: _PDFPage
@property (nonatomic) CGRect PDFVisibleRect; // ivar: _PDFVisibleRect
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *loggableDescription;
@property (readonly) Class superclass;


-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif