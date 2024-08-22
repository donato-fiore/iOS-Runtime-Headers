// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSBASICOBJECTID_H
#define NSBASICOBJECTID_H

@class NSCoreManagedObjectID;



@interface NSBasicObjectID : NSCoreManagedObjectID {
    int _cd_rc;
    id *_referenceData;
}




+(char *)generatedNameSuffix;
-(id)_referenceData;
-(id)_retainedURIString;
-(id)initWithObject:(id)arg0 ;
-(void)dealloc;


@end


#endif