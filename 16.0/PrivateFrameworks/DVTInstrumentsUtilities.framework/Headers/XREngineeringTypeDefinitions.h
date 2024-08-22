// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef XRENGINEERINGTYPEDEFINITIONS_H
#define XRENGINEERINGTYPEDEFINITIONS_H

@class NSString, NSDate;
@protocol XRXMLParserDelegate;

#import <Foundation/Foundation.h>


@interface XREngineeringTypeDefinitions : NSObject <XRXMLParserDelegate>

 {
    id *_etypeDefHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDate *lastModificationDate;
@property (readonly) Class superclass;


+(BOOL)registerEngineeringTypes:(id)arg0 ;
+(id)descriptionForImplClass:(unsigned char)arg0 ;
+(id)implementationClassByEngineeringTypeMnemonic;
+(void)announceUsageOfEnumString:(id)arg0 context:(id)arg1 ;
-(id)checksum;
-(void)enumerateEngineeringTypeDefs:(id)arg0 ;
-(void)parser:(id)arg0 didFinishParsingElement:(id)arg1 ;


@end


#endif