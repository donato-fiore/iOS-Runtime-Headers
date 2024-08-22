// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ODXDATA_H
#define ODXDATA_H


#import <Foundation/Foundation.h>


@interface ODXData : NSObject



+(?)readConnectionFromNode:(?)arg0 pointIdMapstate;
+(?)readConnectionListFromNode:(?)arg0 pointIdMapstate;
+(?)readConnectionTypeFromNode;
+(?)readModelIdentifierFromNodeattributeName;
+(?)readNode:(?)arg0 toDiagramstate;
+(?)readPointFromNode:(?)arg0 pointIdMapstate;
+(?)readPointListFromNode:(?)arg0 pointIdMapstate;
+(?)readPointTypeFromNode;
+(void)associatePresentationsInIdMap:(id)arg0 ;


@end


#endif