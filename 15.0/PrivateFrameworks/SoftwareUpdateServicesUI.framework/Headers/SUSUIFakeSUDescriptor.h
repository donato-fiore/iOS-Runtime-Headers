// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSUIFAKESUDESCRIPTOR_H
#define SUSUIFAKESUDESCRIPTOR_H

@class SUDescriptor;



@interface SUSUIFakeSUDescriptor : SUDescriptor



-(BOOL)isDownloadable;
-(BOOL)isDownloadableOverCellular;
-(NSUInteger)downloadSize;
-(NSUInteger)installationSize;
-(NSUInteger)preparationSize;
-(id)documentation;
-(id)humanReadableUpdateName;
-(id)productBuildVersion;
-(id)productSystemName;
-(id)productVersion;
-(id)publisher;
-(int)updateType;


@end


#endif