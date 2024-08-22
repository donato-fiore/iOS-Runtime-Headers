// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADDIAGNOSTICSDATABASECOLLECTOR_H
#define CADDIAGNOSTICSDATABASECOLLECTOR_H

@class NSURL, NSArray, NSString;
@protocol CADDiagnosticLogCollector;

#import <Foundation/Foundation.h>


@interface CADDiagnosticsDatabaseCollector : NSObject <CADDiagnosticLogCollector>

 {
    NSURL *_outputURL;
    NSArray *_auxDBInfo;
    ? _database;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(?)collectDatabase:(?)arg0 auxDatabase:(?)arg1 outputURLcontext;
-(?)database;
-(void)collect:(id)arg0 ;
-(void)dealloc;
-(void)determineExpectedOutputFiles:(id)arg0 ;


@end


#endif