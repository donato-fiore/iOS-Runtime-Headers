// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKDOWNLOADRESOURCESRESULTOBJECT_H
#define CRKDOWNLOADRESOURCESRESULTOBJECT_H

@class CATTaskResultObject, NSArray;



@interface CRKDownloadResourcesResultObject : CATTaskResultObject

@property (retain, nonatomic) NSArray *resourceFileURLs; // ivar: _resourceFileURLs


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif