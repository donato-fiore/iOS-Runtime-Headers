// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ODCURAREMODELINFORMATION_H
#define ODCURAREMODELINFORMATION_H

@class NSURL;

#import <Foundation/Foundation.h>

#import "ODCurareReportFillerModelInformation.h"

@interface ODCurareModelInformation : NSObject

@property (retain, nonatomic) ODCurareReportFillerModelInformation *modelInformation; // ivar: _modelInformation
@property (retain, nonatomic) NSURL *modelURL; // ivar: _modelURL


-(id)initWithModelInformation:(id)arg0 modelURL:(id)arg1 ;


@end


#endif