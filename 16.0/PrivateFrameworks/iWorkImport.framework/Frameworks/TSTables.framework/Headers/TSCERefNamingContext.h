// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCEREFNAMINGCONTEXT_H
#define TSCEREFNAMINGCONTEXT_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSCERefNamingContext : NSObject <NSCopying>



@property (nonatomic) BOOL allowSpanningColumnReferenceBodyQualifier; // ivar: _allowSpanningColumnReferenceBodyQualifier
@property (nonatomic) BOOL allowTableName; // ivar: _allowTableName
@property (retain, nonatomic) NSString *contextSheetName; // ivar: _contextSheetName
@property (nonatomic) BOOL forFormulaPlainText; // ivar: _forFormulaPlainText
@property (nonatomic) BOOL forceEscaping; // ivar: _forceEscaping
@property (nonatomic) BOOL forceSheetName; // ivar: _forceSheetName
@property (nonatomic) BOOL forceTableName; // ivar: _forceTableName
@property (nonatomic) TSKUIDStruct hostTableUID; // ivar: _hostTableUID
@property (nonatomic) BOOL quoteComponents; // ivar: _quoteComponents
@property (nonatomic) BOOL showGeometricAsBase; // ivar: _showGeometricAsBase
@property (nonatomic) BOOL suppressIdenticalEndReference; // ivar: _suppressIdenticalEndReference
@property (nonatomic) BOOL useSymbolicNames; // ivar: _useSymbolicNames
@property (nonatomic) BOOL usedSymbolicName; // ivar: _usedSymbolicName


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)reset;


@end


#endif