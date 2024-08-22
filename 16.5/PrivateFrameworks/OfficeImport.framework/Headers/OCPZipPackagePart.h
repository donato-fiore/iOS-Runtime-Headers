// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OCPZIPPACKAGEPART_H
#define OCPZIPPACKAGEPART_H



#import "OCPPackagePart.h"
#import "OISFUZipEntry.h"

@interface OCPZipPackagePart : OCPPackagePart

@property (readonly, nonatomic) OISFUZipEntry *zipEntry; // ivar: mEntry


-(id)data;
-(id)initWithArchive:(id)arg0 location:(id)arg1 package:(id)arg2 ;
-(struct _xmlDoc *)xmlDocument;
-(struct _xmlTextReader *)xmlReader;
-(void)copyToFile:(id)arg0 ;


@end


#endif