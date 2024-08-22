// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIDOCUMENTDATASOURCE_H
#define VUIDOCUMENTDATASOURCE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "VUIDocumentContextData.h"
#import "VUIDocumentPreFetchedData.h"
#import "VUIDocumentUIConfiguration.h"

@interface VUIDocumentDataSource : NSObject

@property (retain, nonatomic) VUIDocumentContextData *contextData; // ivar: _contextData
@property (retain, nonatomic) NSString *controllerRef; // ivar: _controllerRef
@property (retain, nonatomic) NSString *documentRef; // ivar: _documentRef
@property (retain, nonatomic) NSString *documentType; // ivar: _documentType
@property (retain, nonatomic) VUIDocumentPreFetchedData *prefetchData; // ivar: _prefetchData
@property (nonatomic) BOOL shouldLoadPageImmediately; // ivar: _shouldLoadPageImmediately
@property (retain, nonatomic) VUIDocumentUIConfiguration *uiConfiguration; // ivar: _uiConfiguration


+(BOOL)isCanonicalDocumentRef:(id)arg0 ;
+(id)documentDataSourceWithDictionary:(id)arg0 ;
-(id)initWithDataSourceDict:(id)arg0 ;
-(id)initWithDocumentRef:(id)arg0 ;
-(id)jsonData;


@end


#endif