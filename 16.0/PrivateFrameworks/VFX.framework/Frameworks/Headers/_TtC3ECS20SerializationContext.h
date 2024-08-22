// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC3ECS20SERIALIZATIONCONTEXT_H
#define _TTC3ECS20SERIALIZATIONCONTEXT_H

@class SwiftObject;



@interface _TtC3ECS20SerializationContext : SwiftObject {
    ? entityManager;
    ? encodedVersion;
    ? scope;
    ? codingEntity;
    ? codingComponent;
    ? componentsToAdd;
    ? isLoadingForAuthoring;
    ? codeBindingsMetadata;
    ? autoRecoverFromDecodingFailure;
    ? silentlySkipComponentOnEncodingFailure;
    ? logComponentCoding;
    ? codeComponentTypesWithTable;
    ? codePropertiesWithTable;
    ? onDeinit;
    ? entityTableByIndex;
    ? entityTable;
    ? reversedEntityTable;
    ? encodedComponentTypes;
    ? encodedProperties;
}






@end


#endif